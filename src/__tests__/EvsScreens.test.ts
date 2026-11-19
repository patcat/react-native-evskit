const mockRenderDeclarative = jest.fn().mockResolvedValue(undefined);
const mockRemoveScreen = jest.fn().mockResolvedValue(undefined);
const mockShowScreen = jest.fn().mockResolvedValue(undefined);
const mockShowPopup = jest.fn().mockResolvedValue(undefined);
const mockAddListener = jest.fn().mockReturnValue({ remove: jest.fn() });

jest.mock("../EvsKitModule", () => ({
  __esModule: true,
  default: {
    renderDeclarativeScreen: mockRenderDeclarative,
    removeScreen: mockRemoveScreen,
    showScreen: mockShowScreen,
    showPopupMessage: mockShowPopup,
    addListener: mockAddListener,
  },
}));

import { EvsScreens, EvsUI } from "../index";

describe("EvsScreens & EvsUI Declarative API", () => {
  beforeEach(() => {
    jest.clearAllMocks();
  });

  describe("EvsScreens.render", () => {
    it("normalizes and sends screen spec to native bridge", async () => {
      await EvsScreens.render({
        id: "speed-hud",
        width: 420,
        height: 150,
        elements: [
          {
            key: "speed",
            type: "text",
            text: "80",
            x: "center",
            y: "50%",
            color: "#00ff00",
          },
        ],
      });

      expect(mockRenderDeclarative).toHaveBeenCalledTimes(1);
      const passedSpec = mockRenderDeclarative.mock.calls[0][0];

      expect(passedSpec.id).toBe("speed-hud");
      expect(passedSpec.width).toBe(420);
      expect(passedSpec.height).toBe(150);
      expect(passedSpec.elements).toHaveLength(1);
      expect(passedSpec.elements[0].key).toBe("speed");
      expect(passedSpec.elements[0].x).toBe(210);
      expect(passedSpec.elements[0].y).toBe(75);
      expect(typeof passedSpec.elements[0].color).toBe("number");
    });
  });

  describe("EvsScreens.remove", () => {
    it("invokes native removeScreen with screen ID", async () => {
      await EvsScreens.remove("speed-hud");
      expect(mockRemoveScreen).toHaveBeenCalledWith("speed-hud");
    });
  });

  describe("EvsScreens.show (native escape hatch)", () => {
    it("delegates to native showScreen", async () => {
      await EvsScreens.show("native-custom-screen");
      expect(mockShowScreen).toHaveBeenCalledWith("native-custom-screen");
    });
  });

  describe("EvsUI.showPopup", () => {
    it("normalizes and invokes native showPopupMessage", async () => {
      await EvsUI.showPopup({
        text: "Low Battery",
        color: "#ff0000",
        alignV: "bottom",
        timeoutMs: 4000,
      });

      expect(mockShowPopup).toHaveBeenCalledTimes(1);
      const passedPopup = mockShowPopup.mock.calls[0][0];

      expect(passedPopup.text).toBe("Low Battery");
      expect(passedPopup.alignV).toBe("bottom");
      expect(passedPopup.timeoutMs).toBe(4000);
      expect(typeof passedPopup.color).toBe("number");
    });
  });
});
