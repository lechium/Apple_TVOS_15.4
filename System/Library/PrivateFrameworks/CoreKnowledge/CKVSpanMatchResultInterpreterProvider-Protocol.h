//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreKnowledge/NSObject-Protocol.h>

@class NSObject;
@protocol CKVSpanMatchResultInterpreter;

@protocol CKVSpanMatchResultInterpreterProvider <NSObject>
- (NSObject<CKVSpanMatchResultInterpreter> *)getInterpreter;
@end

