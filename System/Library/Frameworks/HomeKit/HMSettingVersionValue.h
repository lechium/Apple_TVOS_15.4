//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFVersion;

@interface HMSettingVersionValue
{
    HMFVersion *_version;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001f1fe
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) HMFVersion *version; // @synthesize version=_version;
- (unsigned long long)hash;	// IMP=0x000000000001f193
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f08e
- (id)attributeDescriptions;	// IMP=0x000000000001ef08
- (id)payloadCopy;	// IMP=0x000000000001edd8
- (id)initWithPayload:(id)arg1;	// IMP=0x000000000001ec0f
- (id)initWithVersion:(id)arg1 type:(long long)arg2;	// IMP=0x000000000001eb7e

@end

