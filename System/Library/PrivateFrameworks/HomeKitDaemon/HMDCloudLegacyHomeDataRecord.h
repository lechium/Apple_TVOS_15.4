//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface HMDCloudLegacyHomeDataRecord
{
}

+ (id)legacyModelWithHomeDataV0:(id)arg1 homeDataV2:(id)arg2;	// IMP=0x00000000009353d3
- (unsigned long long)objectEncoding;	// IMP=0x00000000009353c8
- (void)clearData;	// IMP=0x0000000000935335
@property(retain, nonatomic) NSData *dataVersion2;
- (void)setData:(id)arg1;	// IMP=0x00000000009350fe
- (id)data;	// IMP=0x00000000009350a7
- (id)recordType;	// IMP=0x0000000000935088
- (_Bool)encodeObjectChange:(id)arg1;	// IMP=0x00000000009348e4
- (id)extractObjectChange;	// IMP=0x0000000000933dcc

@end

