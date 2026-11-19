module.exports = {
  preset: "ts-jest",
  testEnvironment: "node",
  testMatch: ["**/__tests__/**/*.test.ts"],
  moduleNameMapper: {
    "^react-native$": "<rootDir>/src/__mocks__/react-native.ts",
  },
};
