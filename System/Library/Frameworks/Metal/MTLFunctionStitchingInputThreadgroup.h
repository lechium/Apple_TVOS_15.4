//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/MTLFunctionStitchingInputNodeSPI-Protocol.h>

@class NSString;

@interface MTLFunctionStitchingInputThreadgroup : NSObject <MTLFunctionStitchingInputNodeSPI>
{
    unsigned long long _bindIndex;	// 8 = 0x8
}

@property(nonatomic) unsigned long long bindIndex; // @synthesize bindIndex=_bindIndex;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000097fc9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000097f93
- (id)initWithBindIndex:(unsigned long long)arg1;	// IMP=0x0000000000097f5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
