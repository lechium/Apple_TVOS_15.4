//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface INCDisplayLayoutMonitorObserver : NSObject
{
    CDUnknownBlockType _handler;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x0000000000006a34
- (void).cxx_destruct;	// IMP=0x0000000000006a24
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)updateDisplayLayout:(id)arg1;	// IMP=0x00000000000067a6

@end
