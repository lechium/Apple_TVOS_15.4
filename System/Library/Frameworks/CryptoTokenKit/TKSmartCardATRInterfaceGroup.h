//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TKSmartCardATRInterfaceGroup : NSObject
{
    NSNumber *_ABC[3];	// 8 = 0x8
    NSNumber *_protocol;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000277de
@property(readonly, nonatomic) NSNumber *protocol; // @synthesize protocol=_protocol;
- (id)description;	// IMP=0x00000000000276a8
- (id)parseWithY:(char *)arg1 toProtocol:(id *)arg2 fromSource:(CDUnknownBlockType)arg3 hasNext:(_Bool *)arg4;	// IMP=0x0000000000027595
- (id)initWithProtocol:(id)arg1;	// IMP=0x000000000002752a
@property(readonly, nonatomic) NSNumber *TC;
@property(readonly, nonatomic) NSNumber *TB;
@property(readonly, nonatomic) NSNumber *TA;

@end

