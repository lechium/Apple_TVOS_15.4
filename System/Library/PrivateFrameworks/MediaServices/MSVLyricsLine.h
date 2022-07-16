//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MSVLyricsSection, NSArray, NSString;

@interface MSVLyricsLine
{
    _Bool _instrumentalBreak;	// 72 = 0x48
    long long _lineIndex;	// 80 = 0x50
    long long _originalLineIndex;	// 88 = 0x58
    MSVLyricsSection *_parentSection;	// 96 = 0x60
    MSVLyricsLine *_nextLine;	// 104 = 0x68
    NSArray *_words;	// 112 = 0x70
    NSString *_translationKey;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000000d2e5
@property(copy, nonatomic) NSString *translationKey; // @synthesize translationKey=_translationKey;
@property(retain, nonatomic) NSArray *words; // @synthesize words=_words;
@property(retain, nonatomic) MSVLyricsLine *nextLine; // @synthesize nextLine=_nextLine;
@property(nonatomic) __weak MSVLyricsSection *parentSection; // @synthesize parentSection=_parentSection;
@property(nonatomic) long long originalLineIndex; // @synthesize originalLineIndex=_originalLineIndex;
@property(nonatomic) long long lineIndex; // @synthesize lineIndex=_lineIndex;
@property(nonatomic, getter=isInstrumentalBreak) _Bool instrumentalBreak; // @synthesize instrumentalBreak=_instrumentalBreak;
- (_Bool)containsTimeOffset:(double)arg1 withErrorMargin:(double)arg2;	// IMP=0x000000000000d18d
- (id)description;	// IMP=0x000000000000d0f3
- (id)init;	// IMP=0x000000000000d0a2

@end
