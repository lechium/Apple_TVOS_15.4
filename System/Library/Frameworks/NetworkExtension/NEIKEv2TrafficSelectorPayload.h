//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface NEIKEv2TrafficSelectorPayload
{
    NSArray *_trafficSelectors;	// 24 = 0x18
}

+ (id)copyTypeDescription;	// IMP=0x00000000000e06a2
- (void).cxx_destruct;	// IMP=0x00000000000e170e
@property(retain) NSArray *trafficSelectors; // @synthesize trafficSelectors=_trafficSelectors;
- (_Bool)parsePayloadData;	// IMP=0x00000000000e0fe4
- (_Bool)generatePayloadData;	// IMP=0x00000000000e07e8
- (_Bool)hasRequiredFields;	// IMP=0x00000000000e07a0
- (id)description;	// IMP=0x00000000000e0787
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000e06af

@end

