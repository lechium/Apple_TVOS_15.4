//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebTextIteratorPrivate : NSObject
{
    struct unique_ptr<WebCore::TextIterator, std::default_delete<WebCore::TextIterator>> _textIterator;	// 8 = 0x8
    struct Vector<unsigned short, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _upconvertedText;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x0000000000127b80
- (id).cxx_construct;	// IMP=0x0000000000127bf0
- (void).cxx_destruct;	// IMP=0x0000000000127b90

@end

