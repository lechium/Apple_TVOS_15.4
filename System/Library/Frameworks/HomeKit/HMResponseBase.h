//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMRequestBase, NSError;
@protocol NSCopying><NSObject;

@interface HMResponseBase : NSObject
{
    HMRequestBase *_request;	// 8 = 0x8
    id <NSCopying><NSObject> _value;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006c395
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id <NSCopying><NSObject> value; // @synthesize value=_value;
@property(readonly, nonatomic) HMRequestBase *request; // @synthesize request=_request;
- (void)setRequest:(id)arg1;	// IMP=0x000000000006c366
- (id)initWithRequest:(id)arg1 error:(id)arg2;	// IMP=0x000000000006c34f
- (id)initWithRequest:(id)arg1 value:(id)arg2 error:(id)arg3;	// IMP=0x000000000006c298

@end

