//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSSet, NSString, _WKWebsiteDataSize;

@interface WKWebsiteDataRecord : NSObject <WKObject>
{
    struct ObjectStorage<API::WebsiteDataRecord> _websiteDataRecord;	// 8 = 0x8
}

@property(readonly) struct Object *_apiObject;
@property(readonly, copy, nonatomic) NSSet *dataTypes;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000266a8f
- (id)_originsStrings;	// IMP=0x0000000000267245
@property(readonly, nonatomic) _WKWebsiteDataSize *_dataSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

