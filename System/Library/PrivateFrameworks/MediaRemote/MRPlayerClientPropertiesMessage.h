//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRPlayerPath, NSDate;

@interface MRPlayerClientPropertiesMessage
{
}

- (unsigned long long)type;	// IMP=0x00000000000e8240
@property(readonly, nonatomic) MRPlayerPath *playerPath;
@property(readonly, nonatomic) NSDate *lastPlayingDate;
- (id)initWithPlayerPath:(id)arg1 lastPlayingDate:(id)arg2;	// IMP=0x00000000000e8056

@end

