//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSUUID;

__attribute__((visibility("hidden")))
@interface LSPlugInQueryWithUnits
{
    NSArray *_pluginUnits;	// 16 = 0x10
    NSUUID *_dbUUID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000074eb2
- (void).cxx_destruct;	// IMP=0x00000000000755a0
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000750cf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000075054
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000074f68
- (id)initWithPlugInUnits:(id)arg1 forDatabaseWithUUID:(id)arg2;	// IMP=0x0000000000074eba

@end

