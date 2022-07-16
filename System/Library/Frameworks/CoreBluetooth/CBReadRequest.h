//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSMutableData;

@interface CBReadRequest : NSObject
{
    char *_bufferPtr;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    unsigned long long _length;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
    NSData *_data;	// 40 = 0x28
    unsigned long long _minLength;	// 48 = 0x30
    unsigned long long _maxLength;	// 56 = 0x38
    NSMutableData *_bufferData;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000031140
@property(retain, nonatomic) NSMutableData *bufferData; // @synthesize bufferData=_bufferData;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;

@end

