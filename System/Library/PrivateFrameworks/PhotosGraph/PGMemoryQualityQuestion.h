//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface PGMemoryQualityQuestion
{
    unsigned short _state;	// 8 = 0x8
    NSDictionary *_additionalInfo;	// 16 = 0x10
    NSString *_entityIdentifier;	// 24 = 0x18
    double _localFactoryScore;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003c3fca
- (unsigned short)state;	// IMP=0x00000000003c3fb9
- (double)localFactoryScore;	// IMP=0x00000000003c3fa7
- (id)entityIdentifier;	// IMP=0x00000000003c3f96
- (id)additionalInfo;	// IMP=0x00000000003c3f85
- (unsigned short)entityType;	// IMP=0x00000000003c3f7a
- (unsigned short)displayType;	// IMP=0x00000000003c3f6f
- (unsigned short)type;	// IMP=0x00000000003c3f64
- (id)initWithMemory:(id)arg1 localFactoryScore:(double)arg2;	// IMP=0x00000000003c3db7

@end
