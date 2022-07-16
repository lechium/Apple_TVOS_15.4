//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WFPEMEncoding : NSObject
{
    NSString *_type;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
}

+ (id)decodePEM:(id)arg1 error:(id *)arg2;	// IMP=0x000000000034c0b6
- (void).cxx_destruct;	// IMP=0x000000000034c08e
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)encodedPEM;	// IMP=0x000000000034be57
- (id)initWithType:(id)arg1 data:(id)arg2;	// IMP=0x000000000034bd8f

@end
