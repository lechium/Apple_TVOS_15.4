//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, MKTransitSectionPagingFilter, NSDate, NSSet;
@protocol GEOTransitSystem;

__attribute__((visibility("hidden")))
@interface MKTransitSectionController : NSObject
{
    MKMapItem *_mapItem;	// 8 = 0x8
    MKTransitSectionPagingFilter *__pagingFilter;	// 16 = 0x10
    NSSet *_linesToShow;	// 24 = 0x18
    unsigned long long _numberOfRows;	// 32 = 0x20
    unsigned long long _numberOfFilteredRows;	// 40 = 0x28
    unsigned long long _numberOfFilteredLines;	// 48 = 0x30
    _Bool _needsBuildRows;	// 56 = 0x38
    id <GEOTransitSystem> _system;	// 64 = 0x40
    NSDate *_departureCutoffDate;	// 72 = 0x48
    NSDate *_expiredHighFrequencyCutoffDate;	// 80 = 0x50
    NSSet *_incidentEntitiesToExclude;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000081bfb
@property(readonly, nonatomic) MKTransitSectionPagingFilter *_pagingFilter; // @synthesize _pagingFilter=__pagingFilter;
@property(readonly, nonatomic) unsigned long long numberOfFilteredLines; // @synthesize numberOfFilteredLines=_numberOfFilteredLines;
@property(retain, nonatomic) NSSet *incidentEntitiesToExclude; // @synthesize incidentEntitiesToExclude=_incidentEntitiesToExclude;
@property(retain, nonatomic) NSDate *expiredHighFrequencyCutoffDate; // @synthesize expiredHighFrequencyCutoffDate=_expiredHighFrequencyCutoffDate;
@property(retain, nonatomic) NSDate *departureCutoffDate; // @synthesize departureCutoffDate=_departureCutoffDate;
@property(readonly, nonatomic) id <GEOTransitSystem> system; // @synthesize system=_system;
- (void)_buildRows;	// IMP=0x0000000000081b7d
- (void)_setNeedsBuildRows;	// IMP=0x0000000000081b73
- (_Bool)_needsBuildRows;	// IMP=0x0000000000081b6a
- (id)linesToShow;	// IMP=0x0000000000081b31
- (_Bool)hasFilteredLines;	// IMP=0x0000000000081af8
- (_Bool)hasFilteredRows;	// IMP=0x0000000000081ab6
- (unsigned long long)numberOfRows;	// IMP=0x0000000000081a81
- (void)incrementPagingFilter;	// IMP=0x0000000000081a27
- (id)initWithMapItem:(id)arg1 system:(id)arg2;	// IMP=0x0000000000081852
- (id)init;	// IMP=0x0000000000081828

@end
