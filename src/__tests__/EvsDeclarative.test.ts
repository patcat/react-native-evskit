import {
  normalizeColor,
  normalizeElement,
  normalizePopupSpec,
  normalizeScreenSpec,
  resolveCoord,
} from "../EvsDeclarativeUtils";

describe("EvsDeclarativeUtils", () => {
  describe("resolveCoord", () => {
    it("returns raw numbers", () => {
      expect(resolveCoord(100, 420)).toBe(100);
      expect(resolveCoord(0, 150)).toBe(0);
      expect(resolveCoord(-50, 420)).toBe(-50);
      expect(resolveCoord(12.5, 420)).toBe(12.5);
    });

    it("resolves 'center' to 50% of the given dimension", () => {
      expect(resolveCoord("center", 420)).toBe(210);
      expect(resolveCoord("center", 150)).toBe(75);
    });

    it("resolves percentage strings", () => {
      expect(resolveCoord("50%", 420)).toBe(210);
      expect(resolveCoord("25%", 400)).toBe(100);
      expect(resolveCoord("100%", 150)).toBe(150);
      expect(resolveCoord("0%", 150)).toBe(0);
    });

    it("falls back to defaultValue for undefined or invalid percentage", () => {
      expect(resolveCoord(undefined, 420, 10)).toBe(10);
      expect(resolveCoord(undefined, 420)).toBe(0);
      expect(resolveCoord("invalid%" as any, 420, 5)).toBe(5);
    });
  });

  describe("normalizeColor", () => {
    it("preserves integer colors", () => {
      expect(normalizeColor(0x00ff00)).toBe(0x00ff00);
      expect(normalizeColor(0xff0000)).toBe(0xff0000);
    });

    it("returns undefined for null or undefined", () => {
      expect(normalizeColor(undefined)).toBeUndefined();
      expect(normalizeColor(null as any)).toBeUndefined();
    });

    it("normalizes hex string colors", () => {
      const green = normalizeColor("#00ff00");
      expect(typeof green).toBe("number");
      expect(green).toBe(0x00ff00ff);
    });

    it("normalizes named colors", () => {
      const red = normalizeColor("red");
      expect(red).toBe(0xff0000ff);
    });
  });

  describe("normalizeElement", () => {
    const W = 420;
    const H = 150;

    it("normalizes Text element with alignment and font defaults", () => {
      const elem = normalizeElement(
        {
          key: "t1",
          type: "text",
          text: "Hello",
          x: "center",
          y: "50%",
          color: "#00ff00",
        },
        W,
        H
      );

      expect(elem.key).toBe("t1");
      expect(elem.type).toBe("text");
      expect(elem.text).toBe("Hello");
      expect(elem.font).toBe("medium");
      expect(elem.align).toBe("center");
      expect(elem.x).toBe(210);
      expect(elem.y).toBe(75);
      expect(elem.color).toBe(0x00ff00ff);
    });

    it("normalizes Line element with endpoint coordinate resolution", () => {
      const elem = normalizeElement(
        {
          key: "l1",
          type: "line",
          x: "10%",
          y: 20,
          x1: "90%",
          y1: 20,
          thickness: 3,
          color: "red",
        },
        W,
        H
      );

      expect(elem.key).toBe("l1");
      expect(elem.type).toBe("line");
      expect(elem.x).toBe(42); // 10% of 420
      expect(elem.y).toBe(20);
      expect(elem.x1).toBe(378); // 90% of 420
      expect(elem.y1).toBe(20);
      expect(elem.thickness).toBe(3);
      expect(elem.color).toBe(0xff0000ff);
    });

    it("normalizes Arrow element", () => {
      const elem = normalizeElement(
        {
          key: "a1",
          type: "arrow",
          direction: "right",
          x: 100,
          y: 50,
          headLength: 20,
          bodyWidth: 12,
          bodyLength: 40,
          color: "#00ff00",
          fillColor: "yellow",
        },
        W,
        H
      );

      expect(elem.key).toBe("a1");
      expect(elem.type).toBe("arrow");
      expect(elem.direction).toBe("right");
      expect(elem.headLength).toBe(20);
      expect(elem.bodyWidth).toBe(12);
      expect(elem.bodyLength).toBe(40);
      expect(elem.color).toBe(0x00ff00ff);
      expect(elem.fillColor).toBe(0xffff00ff);
    });

    it("normalizes Arc element", () => {
      const elem = normalizeElement(
        {
          key: "arc1",
          type: "arc",
          x: "center",
          y: "center",
          radius: 40,
          angleFromDeg: 135,
          angleToDeg: 225,
          thickness: 4,
        },
        W,
        H
      );

      expect(elem.key).toBe("arc1");
      expect(elem.type).toBe("arc");
      expect(elem.x).toBe(210);
      expect(elem.y).toBe(75);
      expect(elem.radius).toBe(40);
      expect(elem.angleFromDeg).toBe(135);
      expect(elem.angleToDeg).toBe(225);
      expect(elem.thickness).toBe(4);
    });

    it("normalizes Ellipse element", () => {
      const elem = normalizeElement(
        {
          key: "el1",
          type: "ellipse",
          x: 150,
          y: 60,
          radiusX: 50,
          radiusY: 30,
        },
        W,
        H
      );

      expect(elem.key).toBe("el1");
      expect(elem.type).toBe("ellipse");
      expect(elem.radiusX).toBe(50);
      expect(elem.radiusY).toBe(30);
    });

    it("normalizes Polygon element", () => {
      const points = [
        { x: 10, y: 10 },
        { x: 50, y: 10 },
        { x: 30, y: 40 },
      ];
      const elem = normalizeElement(
        {
          key: "poly1",
          type: "polygon",
          points,
          fillColor: "#00ff00",
        },
        W,
        H
      );

      expect(elem.key).toBe("poly1");
      expect(elem.type).toBe("polygon");
      expect(elem.points).toEqual(points);
      expect(elem.fillColor).toBe(0x00ff00ff);
    });

    it("normalizes Path element with closed flag", () => {
      const points = [
        { x: 0, y: 0 },
        { x: 10, y: 10 },
        { x: 20, y: 0 },
      ];
      const elem = normalizeElement(
        {
          key: "p1",
          type: "path",
          points,
          closed: true,
        },
        W,
        H
      );

      expect(elem.key).toBe("p1");
      expect(elem.type).toBe("path");
      expect(elem.points).toEqual(points);
      expect(elem.closed).toBe(true);
    });

    it("normalizes Image element with slot", () => {
      const elem = normalizeElement(
        {
          key: "img1",
          type: "image",
          resource: "logo.png",
          slot: "s2",
          x: 20,
          y: 30,
        },
        W,
        H
      );

      expect(elem.key).toBe("img1");
      expect(elem.type).toBe("image");
      expect(elem.resource).toBe("logo.png");
      expect(elem.slot).toBe("s2");
      expect(elem.x).toBe(20);
      expect(elem.y).toBe(30);
    });
  });

  describe("normalizeScreenSpec", () => {
    it("defaults dimensions to 420x150 when omitted", () => {
      const spec = normalizeScreenSpec({
        id: "hud-default",
        elements: [],
      });

      expect(spec.id).toBe("hud-default");
      expect(spec.width).toBe(420);
      expect(spec.height).toBe(150);
      expect(spec.elements).toEqual([]);
    });

    it("honors custom screen dimensions", () => {
      const spec = normalizeScreenSpec({
        id: "hud-custom",
        width: 640,
        height: 400,
        elements: [
          {
            key: "center-text",
            type: "text",
            text: "Full Display",
            x: "center",
            y: "center",
          },
        ],
      });

      expect(spec.width).toBe(640);
      expect(spec.height).toBe(400);
      expect(spec.elements[0].x).toBe(320); // center of 640
      expect(spec.elements[0].y).toBe(200); // center of 400
    });
  });

  describe("normalizePopupSpec", () => {
    it("sets default popup timeout and alignments", () => {
      const popup = normalizePopupSpec({
        text: "Lap 1 Completed",
        color: "#00ff00",
      });

      expect(popup.text).toBe("Lap 1 Completed");
      expect(popup.font).toBe("medium");
      expect(popup.alignV).toBe("bottom");
      expect(popup.timeoutMs).toBe(3000);
      expect(popup.color).toBe(0x00ff00ff);
    });

    it("honors custom popup properties", () => {
      const popup = normalizePopupSpec({
        text: "Speed Warning",
        font: "large",
        alignV: "top",
        timeoutMs: 5000,
        color: "red",
      });

      expect(popup.text).toBe("Speed Warning");
      expect(popup.font).toBe("large");
      expect(popup.alignV).toBe("top");
      expect(popup.timeoutMs).toBe(5000);
      expect(popup.color).toBe(0xff0000ff);
    });
  });
});
