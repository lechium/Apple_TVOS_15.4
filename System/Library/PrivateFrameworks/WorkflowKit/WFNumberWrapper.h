//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface WFNumberWrapper : NSObject
{
    NSNumber *_number;	// 8 = 0x8
}

+ (id)wrapperWithNumber:(id)arg1;	// IMP=0x0000000000247c22
- (void).cxx_destruct;	// IMP=0x0000000000247e55
@property(readonly, nonatomic) NSNumber *number; // @synthesize number=_number;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000247d52
- (unsigned long long)hash;	// IMP=0x0000000000247d0e

@end

