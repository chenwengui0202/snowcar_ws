
(cl:in-package :asdf)

(defsystem "optris_drivers-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Flag" :depends-on ("_package_Flag"))
    (:file "_package_Flag" :depends-on ("_package"))
    (:file "Temperature" :depends-on ("_package_Temperature"))
    (:file "_package_Temperature" :depends-on ("_package"))
  ))