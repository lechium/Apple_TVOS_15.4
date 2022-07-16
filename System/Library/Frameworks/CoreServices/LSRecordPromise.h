//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSData, _LSDatabase;

@interface LSRecordPromise : NSObject <NSSecureCoding>
{
    _LSDatabase *_db;	// 8 = 0x8
    NSData *_pi;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f1fd8
+ (id)new;	// IMP=0x00000000000f1862
- (void).cxx_destruct;	// IMP=0x00000000000f245e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f21c2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f1fe0
- (id)_initWithRecord:(id)arg1;	// IMP=0x00000000000f1e3d
- (id)fulfillReturningError:(id *)arg1;	// IMP=0x00000000000f1a8c
- (id)initWithRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f1890
- (id)init;	// IMP=0x00000000000f186b

@end
