//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface ICStoreDialogResponseButtonAction : NSObject <NSCopying>
{
    NSDictionary *_actionDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000016deb3
@property(readonly, copy, nonatomic) NSDictionary *actionDictionary; // @synthesize actionDictionary=_actionDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016de9e
@property(readonly, copy, nonatomic) NSString *kind;
@property(readonly, copy, nonatomic) NSString *URLString;
@property(readonly, copy, nonatomic) NSString *subtarget;
@property(readonly, copy, nonatomic) NSString *itemName;
@property(readonly, copy, nonatomic) NSString *buyParams;
@property(readonly, nonatomic) long long type;
- (id)initWithResponseButtonActionDictionary:(id)arg1;	// IMP=0x000000000016dacf

@end

