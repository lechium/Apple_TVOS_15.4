//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem
{
    NSMutableSet *_comps;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000006cc6
@property(retain, nonatomic) NSMutableSet *comps; // @synthesize comps=_comps;
@property(readonly, nonatomic) NSSet *compNames;
- (id)childrenToWrite;	// IMP=0x0000000000006a20
- (void)addComp:(id)arg1;	// IMP=0x00000000000069b6
- (id)description;	// IMP=0x00000000000068fe
- (id)componentsAsString;	// IMP=0x000000000000684f
- (id)init;	// IMP=0x0000000000006829
- (id)copyParseRules;	// IMP=0x0000000000006741

@end

