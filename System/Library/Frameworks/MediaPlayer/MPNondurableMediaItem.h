//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPNondurableMediaItem
{
    unsigned long long _persistentID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ca902
+ (id)defaultPropertyValues;	// IMP=0x00000000000ca8fa
+ (_Bool)canFilterByProperty:(id)arg1;	// IMP=0x00000000000ca8f2
- (id)mediaLibrary;	// IMP=0x00000000000ca7f3
- (_Bool)isUsableAsRepresentativeItem;	// IMP=0x00000000000ca7eb
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ca754
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ca6d7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ca65d
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000ca545
- (id)valueForProperty:(id)arg1;	// IMP=0x00000000000ca363
- (id)valuesForProperties:(id)arg1;	// IMP=0x00000000000ca294
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ca1f1
- (_Bool)incrementPlayCountForStopTime:(double)arg1;	// IMP=0x00000000000ca1e9
- (void)incrementPlayCountForPlayingToEnd;	// IMP=0x00000000000ca1e3
- (void)incrementSkipCount;	// IMP=0x00000000000ca1dd
- (void)incrementPlayCount;	// IMP=0x00000000000ca1d7
- (void)noteWasPlayedToTime:(double)arg1 skipped:(_Bool)arg2;	// IMP=0x00000000000ca1d1
- (void)markNominalAmountHasBeenPlayed;	// IMP=0x00000000000ca1cb
- (double)nominalHasBeenPlayedThreshold;	// IMP=0x00000000000ca1c2
- (_Bool)didSkipWithPlayedToTime:(double)arg1;	// IMP=0x00000000000ca1ba
- (_Bool)existsInLibrary;	// IMP=0x00000000000ca1b2
- (unsigned long long)persistentID;	// IMP=0x00000000000ca1a1
- (id)initWithPersistentID:(unsigned long long)arg1;	// IMP=0x00000000000ca15d

@end

