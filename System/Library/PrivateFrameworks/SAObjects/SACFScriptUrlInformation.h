//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, NSURL;

@interface SACFScriptUrlInformation
{
}

+ (id)scriptUrlInformationWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000006b40
+ (id)scriptUrlInformation;	// IMP=0x0000000000006b2e
@property(copy, nonatomic) NSString *requestMethodType;
@property(copy, nonatomic) NSDictionary *headerFields;
@property(copy, nonatomic) NSURL *downloadUrl;
- (id)encodedClassName;	// IMP=0x0000000000006b21
- (id)groupIdentifier;	// IMP=0x0000000000006b0d

@end

