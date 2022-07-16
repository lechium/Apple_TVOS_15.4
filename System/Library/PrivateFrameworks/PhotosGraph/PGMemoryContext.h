//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSTimeZone, PHPhotoLibrary;

@interface PGMemoryContext : NSObject
{
    _Bool _futureLookup;	// 8 = 0x8
    NSDate *_localDate;	// 16 = 0x10
    NSTimeZone *_timeZone;	// 24 = 0x18
    NSDate *_creationDateOfLastMemory;	// 32 = 0x20
    unsigned long long _numberOfDaysSinceMemoryUpgrade;	// 40 = 0x28
    PHPhotoLibrary *_photoLibrary;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001d024d
@property(readonly, nonatomic) _Bool futureLookup; // @synthesize futureLookup=_futureLookup;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) unsigned long long numberOfDaysSinceMemoryUpgrade; // @synthesize numberOfDaysSinceMemoryUpgrade=_numberOfDaysSinceMemoryUpgrade;
@property(retain, nonatomic) NSDate *creationDateOfLastMemory; // @synthesize creationDateOfLastMemory=_creationDateOfLastMemory;
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
- (id)initWithFutureLocalDate:(id)arg1 timeZone:(id)arg2 photoLibrary:(id)arg3;	// IMP=0x00000000001d01db
- (id)initWithMemoryPlanner:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000001d00ba
- (id)initWithLocalDate:(id)arg1 timeZone:(id)arg2 photoLibrary:(id)arg3;	// IMP=0x00000000001cffc0

@end

