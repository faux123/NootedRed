//  Copyright © 2022-2023 ChefKiss Inc. Licensed under the Thou Shalt Not Profit License version 1.5. See LICENSE for
//  details.

#pragma once
#include <Headers/kern_util.hpp>

using t_GenericConstructor = void (*)(void *that);

constexpr uint32_t AMDGPU_FAMILY_RAVEN = 0x8E;

constexpr uint32_t PPSMC_MSG_PowerDownSdma = 0xD;
constexpr uint32_t PPSMC_MSG_PowerUpSdma = 0xE;

constexpr uint32_t mmHUBP0_DCSURF_ADDR_CONFIG = 0x55A;
constexpr uint32_t mmHUBP1_DCSURF_ADDR_CONFIG = 0x61E;
constexpr uint32_t mmHUBP0_DCSURF_SURFACE_CONFIG = 0x559;
constexpr uint32_t mmHUBP0_DCSURF_TILING_CONFIG = 0x55B;
constexpr uint32_t mmHUBP0_DCSURF_PRI_VIEWPORT_START = 0x55C;
constexpr uint32_t mmHUBP0_DCSURF_PRI_VIEWPORT_DIMENSION = 0x55D;
constexpr uint32_t mmHUBP2_DCSURF_ADDR_CONFIG = 0x6E2;
constexpr uint32_t mmHUBP1_DCSURF_SURFACE_CONFIG = 0x61D;
constexpr uint32_t mmHUBP1_DCSURF_TILING_CONFIG = 0x61F;
constexpr uint32_t mmHUBP1_DCSURF_PRI_VIEWPORT_START = 0x620;
constexpr uint32_t mmHUBP1_DCSURF_PRI_VIEWPORT_DIMENSION = 0x621;
constexpr uint32_t mmHUBP3_DCSURF_ADDR_CONFIG = 0x7A6;
constexpr uint32_t mmHUBP2_DCSURF_SURFACE_CONFIG = 0x6E1;
constexpr uint32_t mmHUBP2_DCSURF_TILING_CONFIG = 0x6E3;
constexpr uint32_t mmHUBP2_DCSURF_PRI_VIEWPORT_START = 0x6E4;
constexpr uint32_t mmHUBP2_DCSURF_PRI_VIEWPORT_DIMENSION = 0x6E5;
constexpr uint32_t mmHUBP3_DCSURF_SURFACE_CONFIG = 0x7A5;
constexpr uint32_t mmHUBP3_DCSURF_TILING_CONFIG = 0x7A7;
constexpr uint32_t mmHUBP3_DCSURF_PRI_VIEWPORT_START = 0x7A8;
constexpr uint32_t mmHUBP3_DCSURF_PRI_VIEWPORT_DIMENSION = 0x7A9;

constexpr uint32_t mmHUBPREQ0_DCSURF_SURFACE_PITCH = 0x57B;
constexpr uint32_t mmHUBPREQ0_DCSURF_PRIMARY_SURFACE_ADDRESS = 0x57D;
constexpr uint32_t mmHUBPREQ0_DCSURF_PRIMARY_SURFACE_ADDRESS_HIGH = 0x57E;
constexpr uint32_t mmHUBPREQ0_DCSURF_FLIP_CONTROL = 0x58E;
constexpr uint32_t mmHUBPREQ0_DCSURF_SURFACE_EARLIEST_INUSE = 0x597;
constexpr uint32_t mmHUBPREQ0_DCSURF_SURFACE_EARLIEST_INUSE_HIGH = 0x598;
constexpr uint32_t mmHUBPREQ1_DCSURF_SURFACE_PITCH = 0x63F;
constexpr uint32_t mmHUBPREQ1_DCSURF_PRIMARY_SURFACE_ADDRESS = 0x641;
constexpr uint32_t mmHUBPREQ1_DCSURF_PRIMARY_SURFACE_ADDRESS_HIGH = 0x642;
constexpr uint32_t mmHUBPREQ1_DCSURF_FLIP_CONTROL = 0x652;
constexpr uint32_t mmHUBPREQ1_DCSURF_SURFACE_EARLIEST_INUSE = 0x65B;
constexpr uint32_t mmHUBPREQ1_DCSURF_SURFACE_EARLIEST_INUSE_HIGH = 0x65C;
constexpr uint32_t mmHUBPREQ2_DCSURF_SURFACE_PITCH = 0x703;
constexpr uint32_t mmHUBPREQ2_DCSURF_PRIMARY_SURFACE_ADDRESS = 0x705;
constexpr uint32_t mmHUBPREQ2_DCSURF_PRIMARY_SURFACE_ADDRESS_HIGH = 0x706;
constexpr uint32_t mmHUBPREQ2_DCSURF_FLIP_CONTROL = 0x716;
constexpr uint32_t mmHUBPREQ2_DCSURF_SURFACE_EARLIEST_INUSE = 0x71F;
constexpr uint32_t mmHUBPREQ2_DCSURF_SURFACE_EARLIEST_INUSE_HIGH = 0x720;
constexpr uint32_t mmHUBPREQ3_DCSURF_SURFACE_PITCH = 0x7C7;
constexpr uint32_t mmHUBPREQ3_DCSURF_PRIMARY_SURFACE_ADDRESS = 0x7C9;
constexpr uint32_t mmHUBPREQ3_DCSURF_PRIMARY_SURFACE_ADDRESS_HIGH = 0x7CA;
constexpr uint32_t mmHUBPREQ3_DCSURF_FLIP_CONTROL = 0x7DA;
constexpr uint32_t mmHUBPREQ3_DCSURF_SURFACE_EARLIEST_INUSE = 0x7E3;
constexpr uint32_t mmHUBPREQ3_DCSURF_SURFACE_EARLIEST_INUSE_HIGH = 0x7E4;

constexpr uint32_t mmHUBPRET0_HUBPRET_CONTROL = 0x5E0;
constexpr uint32_t mmHUBPRET1_HUBPRET_CONTROL = 0x6A4;
constexpr uint32_t mmHUBPRET2_HUBPRET_CONTROL = 0x768;
constexpr uint32_t mmHUBPRET3_HUBPRET_CONTROL = 0x82C;

constexpr uint32_t mmOTG0_OTG_CONTROL = 0x1B41;
constexpr uint32_t mmOTG0_OTG_INTERLACE_CONTROL = 0x1B44;
constexpr uint32_t mmOTG1_OTG_CONTROL = 0x1BC1;
constexpr uint32_t mmOTG1_OTG_INTERLACE_CONTROL = 0x1BC4;
constexpr uint32_t mmOTG2_OTG_CONTROL = 0x1C41;
constexpr uint32_t mmOTG2_OTG_INTERLACE_CONTROL = 0x1C44;
constexpr uint32_t mmOTG3_OTG_CONTROL = 0x1CC1;
constexpr uint32_t mmOTG3_OTG_INTERLACE_CONTROL = 0x1CC4;
constexpr uint32_t mmOTG4_OTG_CONTROL = 0x1D41;
constexpr uint32_t mmOTG4_OTG_INTERLACE_CONTROL = 0x1D44;
constexpr uint32_t mmOTG5_OTG_CONTROL = 0x1DC1;
constexpr uint32_t mmOTG5_OTG_INTERLACE_CONTROL = 0x1DC4;

constexpr uint32_t mmPCIE_INDEX2 = 0xE;
constexpr uint32_t mmPCIE_DATA2 = 0xF;

constexpr uint32_t mmIH_CHICKEN = 0x122C;
constexpr uint32_t mmIH_MC_SPACE_GPA_ENABLE = 0x10;
constexpr uint32_t mmIH_CLK_CTRL = 0x117B;
constexpr uint32_t mmIH_IH_BUFFER_MEM_CLK_SOFT_OVERRIDE_SHIFT = 0x1A;
constexpr uint32_t mmIH_DBUS_MUX_CLK_SOFT_OVERRIDE_SHIFT = 0x1B;

constexpr uint32_t MP_BASE = 0x16000;

constexpr uint32_t AMDGPU_MAX_USEC_TIMEOUT = 100000;

constexpr uint32_t mmMP1_SMN_C2PMSG_90 = 0x29A;
constexpr uint32_t mmMP1_SMN_C2PMSG_82 = 0x292;
constexpr uint32_t mmMP1_SMN_C2PMSG_66 = 0x282;

struct CommonFirmwareHeader {
    uint32_t size;
    uint32_t headerSize;
    uint16_t headerMajor;
    uint16_t headerMinor;
    uint16_t ipMajor;
    uint16_t ipMinor;
    uint32_t ucodeVer;
    uint32_t ucodeSize;
    uint32_t ucodeOff;
    uint32_t crc32;
} PACKED;

struct GPUInfoFirmware {
    uint32_t gcNumSe;
    uint32_t gcNumCuPerSh;
    uint32_t gcNumShPerSe;
    uint32_t gcNumRbPerSe;
    uint32_t gcNumTccs;
    uint32_t gcNumGprs;
    uint32_t gcNumMaxGsThds;
    uint32_t gcGsTableDepth;
    uint32_t gcGsPrimBuffDepth;
    uint32_t gcParameterCacheDepth;
    uint32_t gcDoubleOffchipLdsBuffer;
    uint32_t gcWaveSize;
    uint32_t gcMaxWavesPerSimd;
    uint32_t gcMaxScratchSlotsPerCu;
    uint32_t gcLdsSize;
} PACKED;

struct CAILAsicCapsEntry {
    uint32_t familyId, deviceId;
    uint32_t revision, extRevision;
    uint32_t pciRevision;
    uint32_t _reserved;
    const uint32_t *caps;
    const uint32_t *skeleton;
} PACKED;

struct CAILAsicCapsInitEntry {
    uint64_t familyId, deviceId;
    uint64_t revision, extRevision;
    uint64_t pciRevision;
    const uint32_t *caps;
    const void *goldenCaps;
} PACKED;

static const uint32_t ddiCapsRaven[16] = {0x800005, 0x500011FE, 0x80000, 0x11001000, 0x200, 0x68000001, 0x20000000,
    0x4002, 0x22420001, 0x9E20E10, 0x2000120, 0x0, 0x0, 0x0, 0x0, 0x0};
static const uint32_t ddiCapsRenoir[16] = {0x800005, 0x500011FE, 0x80000, 0x11001000, 0x200, 0x68000001, 0x20000000,
    0x4002, 0x22420001, 0x9E20E18, 0x2000120, 0x0, 0x0, 0x0, 0x0, 0x0};

enum CAILResult : uint32_t {
    kCAILResultSuccess = 0,
    kCAILResultInvalidArgument,
    kCAILResultGeneralFailure,
    kCAILResultResourcesExhausted,
    kCAILResultUnsupported,
};

struct CAILDeviceTypeEntry {
    uint32_t deviceId;
    uint32_t deviceType;
} PACKED;

static const uint32_t ravenDevAttrFlags = 0x49;

struct DeviceCapabilityEntry {
    uint64_t familyId, extRevision;
    uint64_t deviceId, revision, enumRevision;
    const void *swipInfo, *swipInfoMinimal;
    const uint32_t *devAttrFlags;
    const void *goldenRegisterSetings, *doorbellRange;
} PACKED;

constexpr uint64_t DEVICE_CAP_ENTRY_REV_DONT_CARE = 0xDEADCAFEU;

enum VideoMemoryType : uint32_t {
    kVideoMemoryTypeUnknown,
    kVideoMemoryTypeDDR2,
    kVideoMemoryTypeDDR3 = 3,
    kVideoMemoryTypeDDR4,
};

constexpr uint32_t PP_RESULT_OK = 1;

constexpr uint32_t ADDR_CHIP_FAMILY_AI = 8;

constexpr uint32_t Dcn1NonBpp64SwModeMask = 0x2220221;
constexpr uint32_t Dcn1Bpp64SwModeMask = 0x6660661;
constexpr uint32_t Dcn2NonBpp64SwModeMask = 0x2020201;
constexpr uint32_t Dcn2Bpp64SwModeMask = 0x6060601;

struct Gfx9ChipSettings {
    uint32_t isArcticIsland : 1;
    uint32_t isVega10 : 1;
    uint32_t isRaven : 1;
    uint32_t isVega12 : 1;
    uint32_t isVega20 : 1;
    uint32_t reserved0 : 27;
    uint32_t isDce12 : 1;
    uint32_t isDcn1 : 1;
    uint32_t reserved1 : 30;
    uint32_t metaBaseAlignFix : 1;
    uint32_t depthPipeXorDisable : 1;
    uint32_t htileAlignFix : 1;
    uint32_t applyAliasFix : 1;
    uint32_t htileCacheRbConflict : 1;
    uint32_t reserved2 : 27;
};