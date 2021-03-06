//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/TVPlaybackEventMarshaling-Protocol.h>

@class NSDictionary, NSString;

@interface TVPlaybackCustomEventUserInfo : NSObject <TVPlaybackEventMarshaling>
{
    _Bool _expectsReturnValue;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
    id _returnValue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009c436
@property(readonly, nonatomic) id returnValue; // @synthesize returnValue=_returnValue;
@property(nonatomic) _Bool expectsReturnValue; // @synthesize expectsReturnValue=_expectsReturnValue;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (void)processReturnJSValue:(id)arg1 inContext:(id)arg2;	// IMP=0x000000000009c3db
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000009c39a
- (id)initWithProperties:(id)arg1 expectsReturnValue:(_Bool)arg2;	// IMP=0x000000000009c31c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

