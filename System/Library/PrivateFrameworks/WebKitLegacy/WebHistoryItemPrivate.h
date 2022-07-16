//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebHistoryItemPrivate : NSObject
{
    struct RefPtr<WebCore::HistoryItem, WTF::RawPtrTraits<WebCore::HistoryItem>, WTF::DefaultRefDerefTraits<WebCore::HistoryItem>> _historyItem;	// 8 = 0x8
    double _lastVisitedTime;	// 16 = 0x10
    struct unique_ptr<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>, std::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>>> _redirectURLs;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000103400
- (void).cxx_destruct;	// IMP=0x0000000000103320

@end

