//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface PLHighlightHierarchy : NSObject
{
    NSMutableSet *_moments;	// 8 = 0x8
    NSMutableSet *_dayHighlights;	// 16 = 0x10
    NSMutableSet *_dayGroupHighlights;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002dbe1c
@property(readonly, nonatomic) NSMutableSet *dayGroupHighlights; // @synthesize dayGroupHighlights=_dayGroupHighlights;
@property(readonly, nonatomic) NSMutableSet *dayHighlights; // @synthesize dayHighlights=_dayHighlights;
@property(readonly, nonatomic) NSMutableSet *moments; // @synthesize moments=_moments;
- (void)addDayGroupHighlight:(id)arg1;	// IMP=0x00000000002dbc6d
- (void)_addDayHighlight:(id)arg1;	// IMP=0x00000000002dbadc
- (void)addDayHighlight:(id)arg1;	// IMP=0x00000000002dba62
- (void)_addMoment:(id)arg1;	// IMP=0x00000000002db9ff
- (void)addMoment:(id)arg1;	// IMP=0x00000000002db985
- (id)init;	// IMP=0x00000000002db8f9

@end

