//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, SRSTState;
@protocol SRSTClientDelegate;

@interface SRSTClient : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *_currentState;	// 1702125407 = 0x65745f5f
    MISSING_TYPE *_mostRecentEvent;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000002670
- (id)init;	// IMP=0x0000000000002de0
- (void)dealloc;	// IMP=0x0000000000002610
- (void)dispatchEvent:(long long)arg1;	// IMP=0x00000000000025b0
@property(nonatomic, readonly) NSString *mostRecentEventName;
@property(nonatomic, retain) SRSTState *currentState;
@property(nonatomic) __weak id <SRSTClientDelegate> delegate; // @synthesize delegate;

@end

