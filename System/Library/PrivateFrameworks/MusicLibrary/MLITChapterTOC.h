//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MLITChapterTOC
{
    unsigned int _totalTimeInMS;	// 8 = 0x8
    struct ChapterData *_chapterDataRef;	// 16 = 0x10
    unsigned int *_picCookieIndexMap;	// 24 = 0x18
    unsigned int *_urlCookieIndexMap;	// 32 = 0x20
    unsigned int *_nameCookieIndexMap;	// 40 = 0x28
}

+ (void)enumerateChapterTimesInFlattenedChapterData:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ee3e3
+ (void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ee1ed
+ (unsigned int **)_chapterDataCookieIndexMapForProperty:(int)arg1 ofChapterTOC:(id)arg2;	// IMP=0x00000000000ee115
- (id)urlPropertyOfChapterAtIndex:(unsigned int)arg1;	// IMP=0x00000000000edfc2
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned int)arg1;	// IMP=0x00000000000edea6
- (id)urlTitleTrimmingCharacterSet;	// IMP=0x00000000000ede8d
- (id)titlePropertyOfChapterAtIndex:(unsigned int)arg1;	// IMP=0x00000000000edddd
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)arg1;	// IMP=0x00000000000eddbb
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;	// IMP=0x00000000000edd8b
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)arg1 groupingProperty:(int)arg2;	// IMP=0x00000000000edd4c
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;	// IMP=0x00000000000edc9c
- (unsigned int)totalTimeInMS;	// IMP=0x00000000000edc8c
- (unsigned int)groupIndexForChapterIndex:(unsigned int)arg1 groupingProperty:(int)arg2;	// IMP=0x00000000000edc10
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)arg1 groupingProperty:(int)arg2;	// IMP=0x00000000000edbda
- (unsigned int)countOfGroupsForProperty:(int)arg1;	// IMP=0x00000000000edb30
- (unsigned int *)_cachedCookieIndexMapForProperty:(int)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x00000000000ed9c5
- (unsigned int)countOfChapters;	// IMP=0x00000000000ed9a7
- (void)dealloc;	// IMP=0x00000000000ed922
- (struct ChapterData *)chapterDataRef;	// IMP=0x00000000000ed911
- (id)initWithChapterDataRef:(struct ChapterData *)arg1 totalTimeInMS:(unsigned int)arg2;	// IMP=0x00000000000ed820

@end

