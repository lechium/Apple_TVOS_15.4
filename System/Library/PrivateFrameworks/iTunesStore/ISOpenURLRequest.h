//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface ISOpenURLRequest : NSObject <NSCopying>
{
    _Bool _isITunesStoreURL;	// 8 = 0x8
    NSString *_targetIdentifier;	// 16 = 0x10
    NSString *_urlBagKey;	// 24 = 0x18
    NSURL *_url;	// 32 = 0x20
    _Bool _interruptsKeybagRefresh;	// 40 = 0x28
}

+ (id)openURLRequestWithURL:(id)arg1;	// IMP=0x000000000005be55
- (void).cxx_destruct;	// IMP=0x000000000005bf99
@property(copy, nonatomic) NSString *URLBagKey; // @synthesize URLBagKey=_urlBagKey;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(copy, nonatomic) NSString *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
@property(nonatomic, getter=isITunesStoreURL) _Bool ITunesStoreURL; // @synthesize ITunesStoreURL=_isITunesStoreURL;
@property(nonatomic) _Bool interruptsKeybagRefresh; // @synthesize interruptsKeybagRefresh=_interruptsKeybagRefresh;
- (id)description;	// IMP=0x000000000005be9e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005bd9a
- (id)initWithURLBagKey:(id)arg1;	// IMP=0x000000000005bd23
- (id)initWithURL:(id)arg1;	// IMP=0x000000000005bcb4
- (id)init;	// IMP=0x000000000005bca0

@end
