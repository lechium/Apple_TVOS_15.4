//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class URLBag, URLRequestProperties;

@interface URLRequest : NSObject
{
    URLBag *_bag;	// 8 = 0x8
    URLRequestProperties *_requestProperties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000007688c
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000076598
- (id)initWithRequestProperties:(id)arg1;	// IMP=0x00100000000764f1

@end

