//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVCKDataQuery;

@interface TVCKDataImageRequest : NSObject
{
    TVCKDataQuery *_query;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008e92a
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak TVCKDataQuery *query; // @synthesize query=_query;
- (id)initWithQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008e84e

@end
