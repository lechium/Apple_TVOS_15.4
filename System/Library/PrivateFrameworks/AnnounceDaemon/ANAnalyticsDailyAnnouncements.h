//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ANAnalyticsDailyAnnouncements : NSObject
{
    double _lastAccess;	// 8 = 0x8
    NSMutableDictionary *_homes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b118
@property(retain, nonatomic) NSMutableDictionary *homes; // @synthesize homes=_homes;
@property(nonatomic) double lastAccess; // @synthesize lastAccess=_lastAccess;
- (void)incrementCountInHome:(id)arg1 group:(id)arg2;	// IMP=0x000000000000ae56
- (_Bool)shouldReport;	// IMP=0x000000000000addf
- (unsigned long long)homesCount;	// IMP=0x000000000000ad9b
- (unsigned long long)announcementsCount;	// IMP=0x000000000000aa40
- (void)merge:(id)arg1;	// IMP=0x000000000000a460
- (id)dictionary;	// IMP=0x000000000000a228
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000009fe7
- (id)initWithLastAccess:(double)arg1;	// IMP=0x0000000000009f82
- (id)init;	// IMP=0x0000000000009f6d

@end
