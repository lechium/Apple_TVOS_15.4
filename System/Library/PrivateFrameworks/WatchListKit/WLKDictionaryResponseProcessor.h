//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WLKDictionaryResponseProcessor : NSObject
{
    NSString *_dictionaryKeyPath;	// 8 = 0x8
    Class _objectClass;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003f81c
@property(retain, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
@property(copy, nonatomic) NSString *dictionaryKeyPath; // @synthesize dictionaryKeyPath=_dictionaryKeyPath;
- (id)processResponseData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000003f4df
- (id)processResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003f4c8

@end

