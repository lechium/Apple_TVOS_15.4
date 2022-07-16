//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, NSURL, NSURLRequest, NSURLResponse;

@interface WKNavigationData : NSObject <WKObject>
{
    struct ObjectStorage<API::NavigationData> _data;	// 8 = 0x8
}

@property(readonly) struct Object *_apiObject;
@property(readonly) NSURLResponse *response;
@property(readonly) NSURL *destinationURL;
@property(readonly) NSURLRequest *originalRequest;
@property(readonly) NSString *title;
- (void)dealloc;	// IMP=0x00000000002108bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
