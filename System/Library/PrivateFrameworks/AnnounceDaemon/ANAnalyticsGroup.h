//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface ANAnalyticsGroup : NSObject
{
    NSMutableArray *_announcements;	// 8 = 0x8
    NSMutableArray *_metadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001746e
@property(readonly, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSArray *announcements; // @synthesize announcements=_announcements;
- (void)addAnnouncement:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000000173f7
- (id)init;	// IMP=0x0000000000017382

@end

