//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TUIKBHandwritingPointFIFO : NSObject
{
    TUIKBHandwritingPointFIFO *_nextFIFO;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003cbe9
@property(retain, nonatomic) TUIKBHandwritingPointFIFO *nextFIFO; // @synthesize nextFIFO=_nextFIFO;
- (void)clear;	// IMP=0x000000000003cb91
- (void)flush;	// IMP=0x000000000003cb54
- (void)addPoint:(CDStruct_23d8ee2f)arg1;	// IMP=0x000000000003cb42
- (void)emitPoint:(CDStruct_23d8ee2f)arg1;	// IMP=0x000000000003caec
- (id)initWithFIFO:(id)arg1;	// IMP=0x000000000003ca84

@end

