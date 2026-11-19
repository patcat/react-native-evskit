export function processColor(color: any): number | null {
  if (typeof color === "number") return color;
  if (color === "#00ff00" || color === "green") return 0x00ff00ff;
  if (color === "#ff0000" || color === "red") return 0xff0000ff;
  if (color === "#000000" || color === "black") return 0x000000ff;
  if (color === "#ffffff" || color === "white") return 0xffffffff;
  if (color === "yellow" || color === "#ffff00") return 0xffff00ff;
  return null;
}
