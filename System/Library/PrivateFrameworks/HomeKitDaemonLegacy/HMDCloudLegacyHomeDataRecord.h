//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface HMDCloudLegacyHomeDataRecord
{
}

+ (id)legacyModelWithHomeDataV0:(id)arg1 homeDataV2:(id)arg2;	// IMP=0x000000000087baa4
- (unsigned long long)objectEncoding;	// IMP=0x000000000087ba99
- (void)clearData;	// IMP=0x000000000087ba06
@property(retain, nonatomic) NSData *dataVersion2;
- (void)setData:(id)arg1;	// IMP=0x000000000087b7cf
- (id)data;	// IMP=0x000000000087b778
- (id)recordType;	// IMP=0x000000000087b759
- (_Bool)encodeObjectChange:(id)arg1;	// IMP=0x000000000087afb5
- (id)extractObjectChange;	// IMP=0x000000000087a49d

@end

