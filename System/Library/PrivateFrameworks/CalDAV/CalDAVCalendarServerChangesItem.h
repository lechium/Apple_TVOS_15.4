//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem
{
    NSMutableSet *_changedProperties;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001613f
@property(retain, nonatomic) NSMutableSet *changedProperties; // @synthesize changedProperties=_changedProperties;
- (id)copyParseRules;	// IMP=0x0000000000016032
- (void)addChangedProperty:(id)arg1;	// IMP=0x0000000000015fc0
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;	// IMP=0x0000000000015f63
- (id)init;	// IMP=0x0000000000015f3d

@end

