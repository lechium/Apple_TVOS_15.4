//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PGSeasonMemoryTitleGenerator
{
    NSString *_season;	// 8 = 0x8
}

+ (id)seasonSubtitleWithMomentNodes:(id)arg1 seasonName:(id)arg2;	// IMP=0x0000000000185d16
- (void).cxx_destruct;	// IMP=0x0000000000185d03
@property(retain, nonatomic) NSString *season; // @synthesize season=_season;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;	// IMP=0x0000000000185b27
- (id)initWithMomentNodes:(id)arg1 seasonName:(id)arg2 titleGenerationContext:(id)arg3;	// IMP=0x0000000000185aa3

@end

