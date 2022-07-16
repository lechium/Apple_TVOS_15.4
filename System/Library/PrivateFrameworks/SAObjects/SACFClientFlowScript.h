//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SACFScriptEncryptionParameters, SACFScriptUrlInformation;

@interface SACFClientFlowScript
{
}

+ (id)clientFlowScriptWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000b75a
+ (id)clientFlowScript;	// IMP=0x000000000000b748
@property(retain, nonatomic) SACFScriptUrlInformation *urlInformation;
@property(nonatomic) _Bool shouldSkipExecution;
@property(nonatomic) _Bool shouldCacheScript;
@property(copy, nonatomic) NSString *jsScriptIdentifier;
@property(copy, nonatomic) NSData *jsScriptChecksum;
@property(copy, nonatomic) NSString *jsScript;
@property(copy, nonatomic) NSString *fileContentType;
@property(retain, nonatomic) SACFScriptEncryptionParameters *encryptionParameters;
@property(copy, nonatomic) NSData *compressedScript;
- (id)encodedClassName;	// IMP=0x000000000000b73b
- (id)groupIdentifier;	// IMP=0x000000000000b727

@end

