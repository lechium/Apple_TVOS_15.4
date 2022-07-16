//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPNowPlayingInfoLanguageOption, NSArray;

@interface MPNowPlayingInfoLanguageOptionGroup : NSObject
{
    void *_mrLanguageOptionGroup;	// 8 = 0x8
}

@property(readonly, nonatomic) void *mrLanguageOptionGroup; // @synthesize mrLanguageOptionGroup=_mrLanguageOptionGroup;
@property(readonly, nonatomic) _Bool allowEmptySelection; // @dynamic allowEmptySelection;
@property(readonly, nonatomic) MPNowPlayingInfoLanguageOption *defaultLanguageOption; // @dynamic defaultLanguageOption;
@property(readonly, nonatomic) NSArray *languageOptions; // @dynamic languageOptions;
- (void)dealloc;	// IMP=0x00000000002336f4
- (id)initWithMRLanguageOptionGroup:(void *)arg1;	// IMP=0x00000000002336a0
- (id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(id)arg2 allowEmptySelection:(_Bool)arg3;	// IMP=0x0000000000233460

@end

