//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface PGSocialGroupsQuestion
{
    unsigned short _state;	// 8 = 0x8
    NSDictionary *_additionalInfo;	// 16 = 0x10
    NSString *_entityIdentifier;	// 24 = 0x18
    double _localFactoryScore;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003fb45f
- (unsigned short)state;	// IMP=0x00000000003fb44e
- (double)localFactoryScore;	// IMP=0x00000000003fb43c
- (id)entityIdentifier;	// IMP=0x00000000003fb42b
- (id)additionalInfo;	// IMP=0x00000000003fb41a
- (unsigned short)entityType;	// IMP=0x00000000003fb40f
- (unsigned short)displayType;	// IMP=0x00000000003fb404
- (unsigned short)type;	// IMP=0x00000000003fb3f9
- (id)initWithSocialGroupID:(id)arg1 personLocalIdentifiers:(id)arg2 personNames:(id)arg3 localFactoryScore:(double)arg4;	// IMP=0x00000000003fb12c

@end
