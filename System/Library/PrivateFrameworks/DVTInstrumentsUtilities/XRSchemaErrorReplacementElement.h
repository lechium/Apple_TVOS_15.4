//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface XRSchemaErrorReplacementElement : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_replacementString;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000176ba
@property(copy, nonatomic) NSString *replacementString; // @synthesize replacementString=_replacementString;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 key:(id)arg2 replacementString:(id)arg3;	// IMP=0x00000000000175a8

@end

