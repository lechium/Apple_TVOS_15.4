//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface _WKExperimentalFeature : NSObject <WKObject>
{
    struct ObjectStorage<API::ExperimentalFeature> _experimentalFeature;	// 8 = 0x8
}

@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic) _Bool defaultValue;
@property(readonly, copy, nonatomic) NSString *details;
@property(readonly, copy, nonatomic) NSString *key;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000028f8ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

