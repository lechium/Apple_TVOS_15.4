//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface BBDismissalDictionaryAndFeeds
{
    double _dismissalTimeInterval;	// 24 = 0x18
    NSString *_dismissalHash;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000026c9
@property(readonly, copy, nonatomic) NSString *dismissalHash; // @synthesize dismissalHash=_dismissalHash;
@property(readonly, nonatomic) double dismissalTimeInterval; // @synthesize dismissalTimeInterval=_dismissalTimeInterval;
- (id)description;	// IMP=0x000000000000261b
- (_Bool)matchDismissalDictionary:(id)arg1;	// IMP=0x00000000000025f7
- (id)initWithDismissalDictionary:(id)arg1 andFeeds:(unsigned long long)arg2;	// IMP=0x00000000000024d0

@end
