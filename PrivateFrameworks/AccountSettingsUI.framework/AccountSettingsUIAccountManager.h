/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class AccountSettingsUIPluginLoader, NSDictionary;

@interface AccountSettingsUIAccountManager : NSObject  {
    AccountSettingsUIPluginLoader *_pluginLoader;
    NSDictionary *_accountsById;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)accountWithSyncStoreIdentifier:(id)arg1;
- (id)accountsBySyncStoreIdentifier;
- (id)allAccounts;

@end
