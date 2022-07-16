//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PPUtils : NSObject
{
}

+ (id)preferredLanguages;	// IMP=0x0000000000023376
+ (_Bool)localizedTimeStructForSecondsFrom1970:(double)arg1 tm:(struct tm *)arg2;	// IMP=0x0000000000023257
+ (_Bool)localizedTimeStructForDate:(id)arg1 tm:(struct tm *)arg2;	// IMP=0x000000000002321f
+ (_Bool)isFirstPartyApp:(id)arg1;	// IMP=0x0000000000023203
+ (id)sqliteGlobEscape:(id)arg1;	// IMP=0x0000000000022d98
+ (double)jaroSimilarityForString:(id)arg1 other:(id)arg2;	// IMP=0x0000000000022a73
+ (id)reduceSpotlightDomainIdentifiers:(id)arg1;	// IMP=0x00000000000228be
+ (id)currentLocaleLanguageCode;	// IMP=0x0000000000022806
+ (_Bool)yesWithProbability:(double)arg1;	// IMP=0x00000000000227cb
+ (id)coordinatesToGeoHashWithLength:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3;	// IMP=0x0000000000022598
+ (id)formatStringArray:(id)arg1 truncatingAtLength:(unsigned long long)arg2;	// IMP=0x0000000000022487
+ (long long)reverseCompareDouble:(double)arg1 withDouble:(double)arg2;	// IMP=0x000000000002246c
+ (long long)compareDouble:(double)arg1 withDouble:(double)arg2;	// IMP=0x000000000002244d
+ (id)hexUUID;	// IMP=0x00000000000223b0
+ (id)hexOfBytes:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000000222db
+ (id)Sha256ForData:(id)arg1 withSalt:(id)arg2;	// IMP=0x0000000000022160
+ (id)osBuild;	// IMP=0x0000000000022130
+ (_Bool)isInternalDevice;	// IMP=0x000000000002211f
+ (void)enumerateChunksOfSize:(unsigned long long)arg1 fromArray:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000021f6e

@end
