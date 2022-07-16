//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EMFQueryLogger : NSObject
{
    const struct __EmojiLocaleDataWrapper *_localeData;	// 8 = 0x8
}

+ (id)overriddenResultsStringFromQueryResult:(id)arg1 usingLocaleData:(const struct __EmojiLocaleDataWrapper *)arg2;	// IMP=0x000000000000b007
+ (id)documentWeightsStringFromQueryResult:(id)arg1 usingLocaleData:(const struct __EmojiLocaleDataWrapper *)arg2;	// IMP=0x000000000000ad8b
@property(readonly, nonatomic) const struct __EmojiLocaleDataWrapper *localeData; // @synthesize localeData=_localeData;
- (void)logQueryResult:(id)arg1;	// IMP=0x000000000000ab83
- (void)dealloc;	// IMP=0x000000000000ab44
- (id)initWithEmojiLocaleData:(const struct __EmojiLocaleDataWrapper *)arg1;	// IMP=0x000000000000aaf5

@end

