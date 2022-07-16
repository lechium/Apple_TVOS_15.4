//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOSearchAttributionListener : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSMutableArray *_completionHandlers;	// 16 = 0x10
    NSMutableArray *_errorHandlers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000010509ad
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)handleError:(id)arg1;	// IMP=0x0000000001050881
- (void)handleInfo:(id)arg1;	// IMP=0x000000000105075f
- (void)addCompletionHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000001050615
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000105058b

@end
