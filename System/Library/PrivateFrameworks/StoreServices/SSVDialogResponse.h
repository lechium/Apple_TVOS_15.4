//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSString;

@interface SSVDialogResponse : NSObject <NSCopying, SSXPCCoding>
{
    long long _selectedButtonIndex;	// 8 = 0x8
    NSArray *_textFieldValues;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000163a4b
@property(copy, nonatomic) NSArray *textFieldValues; // @synthesize textFieldValues=_textFieldValues;
@property(nonatomic) long long selectedButtonIndex; // @synthesize selectedButtonIndex=_selectedButtonIndex;
- (id)copyXPCEncoding;	// IMP=0x00000000001639d8
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x000000000016392e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001638c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
